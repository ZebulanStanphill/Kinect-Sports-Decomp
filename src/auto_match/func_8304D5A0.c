/* Wraps a play position that ran past the loop end back into the loop, counting the loops passed. */
void fn_8304D5A0(unsigned int position, unsigned int loopStart, unsigned int loopEnd,
                 unsigned short loopCount, unsigned int *outPosition, unsigned short *outLoopCount)
{
    unsigned int length;
    unsigned int offset;
    unsigned int loops;
    unsigned int remaining;

    *outLoopCount = loopCount;
    if ((loopCount != 0 && loopCount <= 1) || position <= loopEnd || loopEnd <= loopStart) {
        *outPosition = position;
        return;
    }
    length = loopEnd - loopStart;
    offset = position - loopStart;
    loops = offset / length;
    if (loops >= loopCount) {
        if (loopCount != 0) {
            *outPosition = position - (loopCount - 1) * length;
            *outLoopCount = 1;
            return;
        }
    }
    if (loopCount == 0) {
        remaining = 0;
    } else {
        remaining = loopCount - (unsigned short)loops;
    }
    *outLoopCount = remaining;
    *outPosition = offset % length + loopStart;
}
