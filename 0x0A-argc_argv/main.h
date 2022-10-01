int main(int argc, char *argv[]);

int main(int argc _attribute_((unused)), char *argv[]);

int main(int argc, char *argv[] _attribute_((unused)));

int main(int argc, char *argv[]);

int main(int argc, char *argv[]);

#include <unistd.h>                                           

                                                              

/**                                                           
 *
 *  * _putchar - writees the character c to stdout               
 *
 *   * !c: the character to print                                 
 *
 *    * Return: on success 1.                                      
 *
 *     * on error, -1.                                              
 *
 *      */                                                           

 int _putchar(char c)                                         

{                                                             

	 return (write(1, &c, 1));                                    

}    
