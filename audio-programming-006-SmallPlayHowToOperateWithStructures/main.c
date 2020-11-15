/**********************************************************
Destription: Complex number multiplication using structures
***********************************************************/

#include <stdio.h>

// create structure for complex number
typedef struct comp {
	float real;
	float imag;
} complex;

// function that multiply two complex numbers
complex mult(complex a, complex b) {
	complex c;
	c.real = a.real * b.real - a.imag * b.imag;
	c.imag = a.real * b.imag + a.imag * b.real;
	return c;
}

int main() {
	float re, im;
	complex a, b, result;

	// get two complex numbers as input
	printf("Please enter first complex number (re, im): ");
	scanf("%f%f", &re, &im);
	a.real = re;
	a.imag = im;
	printf("Please enter second complex number (re, im): ");
	scanf("%f%f", &re, &im);
	b.real = re;
	b.imag = im;

	// multiply them
	result = mult(a, b);
	printf("Their product is %f + %fi \n", result.real, result.imag);
	return 0;
}