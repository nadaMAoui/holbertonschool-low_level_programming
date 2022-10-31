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
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
