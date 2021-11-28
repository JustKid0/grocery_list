#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct product {
    char name[99];
    int sales;
};

int productSize = sizeof(product *);
int productLogCount = 0;

product *productLog;

//For invalid inputs
void invalidInput() {
    printf("Invalid input.\n");
    exit(0);
}
//To sort the Products in the required order
int sortProducts(int n) {

}
//function to check if we need to increase the size of an array(not completed, done separately and just copied it here.
char *getln()
{
    char *line = NULL, *tmp = NULL, CHUNK;
    size_t size = 0, index = 0;
    int ch = EOF;

    while (ch) {
        ch = getc(stdin);

        /* Check if we need to stop. */
        if (ch == EOF || ch == '\n')
            ch = 0;

        /* Check if we need to expand. */
        if (size <= index) {
            size += CHUNK;
            tmp = realloc(line, size);
            if (!tmp) {
                free(line);
                line = NULL;
                break;
            }
            line = tmp;
        }

        /* Actually store the thing. */
        line[index++] = ch;
    }

    return line;
}
//To add the product into an array
void addProduct(char*) {
    char List[99];
    for(int i=0 ; i<99; i++)
    {
        if ( strcmp(char* product.name, char* List[i]) = 0)
        {
            product.sales += 1;
        }
        else
        {
            struct product char*;


        }

    }
}
void commandSplitter(char input[]) {

    switch (command) {
        case '+':
            addProduct();
            break;
        case '?':
          break;
        case '#':
            break;
        default:
            invalidInput();
            break;
    }
}

int main() {
    printf("Top N:\n");
    scanf("%d", n);
    if (n <= 0) {
        invalidInput();
    }
    printf("Requests: \n");
    scanf("%c %s", command, product.item_name);

}