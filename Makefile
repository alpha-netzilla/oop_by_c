OBJS = Shape.o Polyline.o Circle.o Rectangle.o main.o

shape:$(OBJS)
	$(CC) -o $@ $(OBJS)

.c.o:
	$(CC) -c -g -Wall $*.c

############################################################
# この下は依存関係
############################################################
Circle.o: Circle.c Circle.h Shape.h Object.h ClassDescriptor.h \
 Point2D.h
Polyline.o: Polyline.c Polyline.h Shape.h Object.h ClassDescriptor.h \
 Point2D.h
Rectangle.o: Rectangle.c Rectangle.h Shape.h Object.h \
 ClassDescriptor.h Point2D.h
Shape.o: Shape.c Shape.h Object.h ClassDescriptor.h
main.o: main.c Shape.h Object.h ClassDescriptor.h Polyline.h Point2D.h \
 Circle.h Rectangle.h
