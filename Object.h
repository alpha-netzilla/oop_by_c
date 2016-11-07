#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED
#include "ClassDescriptor.h"

typedef struct {
    ClassDescriptor *classDescriptor;
} Object;

#endif /* OBJECT_H_INCLUDED */
