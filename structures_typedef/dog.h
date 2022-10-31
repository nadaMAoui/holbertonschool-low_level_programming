#ifndef HEADERFILE_H
#define HEADERFILE_H
/**
 *struct dog - a structure tof 3 members.
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return:  success
*/
struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
