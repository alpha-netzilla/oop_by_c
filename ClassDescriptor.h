#ifndef CLASS_DESCRIPTOR_H_INCLUDED
#define CLASS_DESCRIPTOR_H_INCLUDED

typedef struct {
    void (**methodTable)();
} ClassDescriptor;

#endif /* CLASS_DESCRIPTOR_H_INCLUDED */
