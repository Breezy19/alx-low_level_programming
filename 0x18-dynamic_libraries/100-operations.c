#include <stdio.h>

/**
 * add - Effectue l'addition de deux entiers.
 * @a: Le premier entier.
 * @b: Le deuxième entier.
 *
 * Return: Le résultat de l'addition.
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * sub - Effectue la soustraction de deux entiers.
 * @a: Le premier entier.
 * @b: Le deuxième entier.
 *
 * Return: Le résultat de la soustraction.
 */
int sub(int a, int b)
{
    return a - b;
}

/**
 * mul - Effectue la multiplication de deux entiers.
 * @a: Le premier entier.
 * @b: Le deuxième entier.
 *
 * Return: Le résultat de la multiplication.
 */
int mul(int a, int b)
{
    return a * b;
}

/**
 * div - Effectue la division de deux entiers.
 * @a: Le premier entier.
 * @b: Le deuxième entier.
 *
 * Return: Le résultat de la division.
 */
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Erreur : division par zéro\n");
        return 0;
    }
    return a / b;
}

/**
 * mod - Effectue le modulo de deux entiers.
 * @a: Le premier entier.
 * @b: Le deuxième entier.
 *
 * Return: Le résultat du modulo.
 */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Erreur : modulo par zéro\n");
        return 0;
    }
    return a % b;
}
