typedef struct Stepper_8270A1E0 {
    int steps;     /* 0x00 */
    int quotient;  /* 0x04 */
    int remainder; /* 0x08 */
    int error;     /* 0x0c */
    int value;     /* 0x10 */
} Stepper_8270A1E0;

void fn_8270A1E0(Stepper_8270A1E0 *stepper, int start, int end, int steps)
{
    int delta = end - start;

    stepper->steps = steps;
    stepper->value = start;
    stepper->quotient = delta / steps;
    stepper->remainder = delta % steps;
    stepper->error = stepper->remainder;
    if (stepper->remainder <= 0) {
        stepper->error += steps;
        stepper->remainder = stepper->error;
        stepper->quotient--;
    }
    stepper->error -= steps;
}
