/**********************************************************************/
/* lab 1 DVG C01 - Driver OBJECT                                      */
/**********************************************************************/

/**********************************************************************/
/* Include files                                                      */
/**********************************************************************/
#include <stdio.h>

/**********************************************************************/
/* Other OBJECT's METHODS (IMPORTED)                                  */
/**********************************************************************/
#include "lexer.h"

/**********************************************************************/
/* The main function (the driver)                                     */
/**********************************************************************/
int main()
{
    int i=0, t=0;
    for (i=0; t!='$'; i++)
        printf("\n token is %4d, lexeme is %10s ", t=get_token(), get_lexeme());
    printf("\n\n");
    return 1;
}

/**********************************************************************/
/* End of code                                                        */
/**********************************************************************/
