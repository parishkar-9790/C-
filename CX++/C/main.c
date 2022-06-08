#include <stdio.h>

struct poly
{
    int coeff;
    int exp;
};

int readpoly(struct poly p[10])
{
    int t1, i;
    printf("\n\nEnter the total number of terms in the polynomial: ");
    scanf("%d", &t1);

    for (i = 0; i < t1; i++)
    {
        printf("Enter the coefficient %d: ", i + 1);
        scanf("%d", &p[i].coeff);
        printf("Enter the exponent %d: ", i + 1);
        scanf("%d", &p[i].exp);
    }
    return t1;
}

int addpoly(struct poly p1[10], struct poly p2[10], int t1, int t2, struct poly p3[10])
{
    int i, j, k;
    i = j = k = 0;
    while (i < t1 && j < t2)
    {
        if (p1[i].exp == p2[j].exp)
        {
            p3[k].coeff = p1[i].coeff + p2[j].coeff;
            p3[k].exp = p1[i].exp + p2[j].exp;
            i++;
            j++;
            k++;
        }
        else if (p1[i].exp > p2[j].exp)
        {
            p3[k].coeff = p1[i].coeff;
            p3[k].exp = p1[i].exp;
            i++;
            k++;
        }
        else
        {
            p3[k].coeff = p2[j].coeff;
            p3[k].exp = p2[j].exp;
            j++;
            k++;
        }
    }
    while (i < t1)
    {
        p3[k].coeff = p1[i].coeff;
        p3[k].exp = p1[i].exp;
        i++;
        k++;
    }
    while (i < t2)
    {
        p3[k].coeff = p2[j].coeff;
        p3[k].exp = p2[j].exp;
        j++;
        k++;
    }
    return k;
}

void displaypoly(struct poly p[10], int term)
{
    int k;
    for (k = 0; k < term - 1; k++)
        printf("%d (x^%d)+", p[k].coeff, p[k].exp);
    printf("%d (x^%d)", p[term - 1].coeff, p[term - 1].exp);
}

int main(void)
{
    int t1, t2, t3;
    struct poly p1[10], p2[10], p3[10];
    t1 = readpoly(p1);
    printf("\nFirst Polynomial: ");
    displaypoly(p1, t1);

    t2 = readpoly(p2);
    printf("\nSecond Polynomial: ");
    displaypoly(p2, t2);

    t3 = addpoly(p1, p2, t1, t2, p3);
    printf("\n\nResultant polynomial after addition: ");
    displaypoly(p3, t3);
    printf("\n");

    return 0;
}
