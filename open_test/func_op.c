/* function operation */

int func1(int a, char b) {
	return 0;
}

char func2(void) {
	return 'a';
}

void func3(int *a, int b) {
	int *c;

	c = a + b; /* [recognize it error.] => what??? is it possible??? NO . pointer ± int is ERROR.*/
}

int main(void) {
	int a;
	char b;

	int c;
	char d;

	a = 1;
	b = 'c';

	c = func1(a, b);
	c = func1(a, b, b); /* error => message return twice */
	d = func2(b); /* error => message return twice */
	d = func2();
	
	func3(&a, c);
	func3(&b, a); /* error */

	c = func1(a, b);
	d = func1(a, b); /* error */
	c = func3(&c, c); /* error */
	c = func3(&c, d); /* error => message return twice */

	return 0;
}
