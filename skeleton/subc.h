/******************************************************
 * File Name   : subc.h
 * Description
 *    This is a header file for the subc program.
 ******************************************************/

#ifndef __SUBC_H__
#define __SUBC_H__

enum lextype_ {KEYWORD, UNDEFINED, ID_}; // 0, 1, 2
enum typeclass_ {INT_, CHAR_, VOID_, STRUCT_, STRING_, ARRAY_, POINTER_, NULL_}; // 0, 1, 2, 3, 4
enum declclass_ {VAR_, CONST_, FUNC_, TYPE_};

#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
#include <string.h>

char* filename;

/* for scope stack */
struct node *top;
struct node *bottom;
struct ste *bottom_ste;

/* for default type decl */
struct decl *inttype;
struct decl *chartype;
struct decl *voidtype;
struct decl *stringtype;
struct decl *nulltype;
struct id *returnid;

struct ste *inttype_ste; // fixed ste pointer
struct ste *current_parsing_function_ste; // for check which function make struct

/* structure for IDs */
typedef struct id {
	int lexType;
	char *name;
	int count;
} id;

/* structure for symbol table entries */
typedef struct ste {
	struct id *name;
	struct decl *decl;
	struct ste *prev;
} ste;

/* structure for declarations */
typedef struct decl {
	int declclass;
	struct decl *type;
	int value;
	float real_value;
	struct ste *formals;
	struct decl *returntype;
	int typeclass;
	struct decl *elementvar; /*use this for args Linked List to save first args decl*/
	int num_index;
	struct ste *fieldlist;
	struct decl *ptrto;	
	int size;
	struct ste **scope;
	struct decl *next;

	/* (FUNC) add this for procdecl (FUNC decl) return type check */
	/* (STRUCT) use this field for which function made the struct. */
	struct ste *formalswithreturnid;
} decl;

/* For hash table */
unsigned hash(char *name);
struct id *enter(int lexType, char *name, int length);
struct id *lookup_hash(char *name, int length);

int read_line();

/* For scope stack */
typedef struct node
{
    struct ste *data;
    struct node *next;
} node;

void printscopestack();
struct ste *insert(struct id* id_ptr, struct decl* decl_ptr);
void insert_bottom(struct id* id_ptr, struct decl* decl_ptr); /* for insert struct to global scope */
struct ste *lookup(struct id* id_ptr);
struct ste *lookup_local_scope(struct id* id_ptr, struct node* scope);
struct node *pushscope();
void pushstelist(struct ste* ste_list);
struct ste *popscope();
struct ste *popste();


// For symbol table declaration
int declare(struct id* id_ptr, struct decl* decl_ptr); /* return error_found */

struct decl *maketypedecl(int typeclass);
struct decl *makevardecl(struct decl* typedecl);
struct decl *makearraydecl(int size, struct decl* vardecl);
struct decl *makeconstdecl(struct decl* typedecl);
struct decl *makeintconstdecl(struct decl* typedecl, int value);
struct decl *makefloatconstdecl(struct decl* typedecl, float value);
struct decl *makeptrdecl(struct decl* typedecl);
struct decl *makeprocdecl();
struct decl *makestructdecl();

//void rollback_struct_of(struct decl* procdecl);

struct decl *findcurrentdecl(struct id* id_ptr); // return last pushed decl (global scope)
struct ste *findcurrentdecls(struct id* id_ptr); // return linked list of ste (global scope)
struct ste *findcurrentdecls_local(struct id* id_ptr); // return linked list of ste (local scope)
struct decl *findstructdecl(struct id* id_ptr); // return struct decl (bottom scope)

struct decl *arrayaccess(struct decl* array_ptr, struct decl* index_ptr);
struct decl *structaccess(struct decl* struct_ptr, struct id* field_id);
struct decl *plustype(struct decl* typedecl1, struct decl* typedecl2);

void add_type_to_var(struct decl* typedecl, struct decl* var_list);

int check_redeclaration(struct id* id_ptr, struct decl* decl_ptr);
int check_is_type(struct decl* decl_ptr);
int check_is_struct_type(struct decl* decl_ptr);
int check_is_pointer_type(decl* decl_ptr);
int check_is_var(struct decl* decl_ptr);
int check_is_array(struct decl* decl_ptr);
int check_is_proc(struct decl* decl_ptr);
struct decl *check_function_call(struct decl* proc_ptr, struct decl* actuals);
//int check_compatible(struct decl* decl_ptr, struct decl* typedecl_ptr);
int check_same_type_for_unary(decl* decl_ptr, decl* typedecl_ptr);
int check_same_type(struct decl* decl_ptr, struct decl* indexptr);
int check_same_decl(decl* decl_ptr1, decl* decl_ptr2);
struct decl *check_compatible_type(decl* typedecl_ptr1, decl* typedecl_ptr2);

void init_type();
void printTypeDecl(struct decl* decl_ptr);
void printArgs(struct decl* const_decl_for_args);
void ERROR(char* s);

#endif