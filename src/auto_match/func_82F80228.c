#include <string.h>

typedef struct TypeDescriptor_82F80228 {
    void *vtable;
    void *spare;
    char name[1];
} TypeDescriptor_82F80228;

typedef struct HandlerType_82F80228 {
    unsigned int adjectives;
    TypeDescriptor_82F80228 *type;
} HandlerType_82F80228;

typedef struct CatchableType_82F80228 {
    unsigned int properties;
    TypeDescriptor_82F80228 *type;
} CatchableType_82F80228;

typedef struct ThrowInfo_82F80228 {
    unsigned int attributes;
} ThrowInfo_82F80228;

/* does the catch clause accept the thrown catchable type */
int __TypeMatch(HandlerType_82F80228 *handler, CatchableType_82F80228 *catchable, ThrowInfo_82F80228 *thrown)
{
    if (handler->type == 0 || handler->type->name[0] == 0)
        return 1;
    if (handler->type != catchable->type && strcmp(handler->type->name, catchable->type->name) != 0)
        return 0;
    if ((!(catchable->properties & 2) || (handler->adjectives & 8))
        && (!(thrown->attributes & 1) || (handler->adjectives & 1))
        && (!(thrown->attributes & 2) || (handler->adjectives & 2)))
        return 1;
    return 0;
}
