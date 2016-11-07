# OOP(Object-Oriented Programming) by C language.
A sample code for understanding how to realize OOP(Object-Oriented Programming) by C language.

Please see a "main.c" file as below. An override function using C is achieved.

    int main(void)
    {
        Shape       *shapes[3];
        int         i;

        shapes[0] = (Shape*)createPolyline();
        shapes[1] = (Shape*)createCircle();
        shapes[2] = (Shape*)createRectangle();

        /* method override */
        for (i = 0; i < 3; i++) {
            drawShape(shapes[i]);
        }

        return 0;
    }
