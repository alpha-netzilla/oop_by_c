#include <stdio.h>
#include <stdlib.h>
#include "Polyline.h"

static void drawPolyline(void);

static void (*methodTable[])() = {
    drawPolyline,
};

static ClassDescriptor polylineClassDescriptor = {
    methodTable,
};

Polyline *createPolyline(void)
{
    Polyline *p = malloc(sizeof(Polyline));

    p->super.super.classDescriptor = &polylineClassDescriptor;
    p->nPoints = 0;
    p->point = NULL;

    return p;
}

static void drawPolyline(void)
{
    fprintf(stderr, "Polyline\n");
}
