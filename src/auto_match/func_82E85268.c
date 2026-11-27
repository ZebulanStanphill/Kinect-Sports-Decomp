/* Chooses a channel layout: a layout class (3 or 7) and an index within it,
   from the number of output channels and the number of input channels. */
void fn_82E85268(void *self, int *index, int *layoutClass, int inputChannels, int outputChannels)
{
    int value;

    switch (outputChannels) {
    case 1:
        *index = 0;
        *layoutClass = 3;
        break;
    case 2:
        *layoutClass = 3;
        *index = inputChannels;
        break;
    case 3:
        *layoutClass = 3;
        if (inputChannels == 2) {
            value = 0;
        } else {
            value = inputChannels == 1 ? 3 : 4;
        }
        *index = value;
        break;
    case 4:
        if (inputChannels < 3) {
            *layoutClass = 3;
            *index = inputChannels + 4;
        } else {
            *layoutClass = 7;
            *index = inputChannels + 0x6d;
        }
        break;
    case 5:
        if (inputChannels > 1 && inputChannels < 5) {
            *layoutClass = 3;
            if (inputChannels == 2) {
                value = 1;
            } else {
                value = inputChannels == 3 ? 0 : 2;
            }
            *index = value;
        } else {
            *layoutClass = 7;
            *index = inputChannels == 1 ? 0x72 : 0x73;
        }
        break;
    case 6:
        *layoutClass = 7;
        *index = inputChannels + 0x73;
        break;
    case 7:
        if (inputChannels == 2 || inputChannels == 4 || inputChannels == 6) {
            *layoutClass = 3;
            value = 3;
            if (inputChannels != 2) {
                value = inputChannels == 4 ? 0 : 4;
            }
            *index = value;
        } else {
            *layoutClass = 7;
            switch (inputChannels) {
            case 1:
                *index = 0x7a;
                break;
            case 3:
                *index = 0x7b;
                break;
            case 5:
                *index = 0x7c;
                break;
            case 7:
                *index = 0x7d;
                break;
            }
        }
        break;
    }
}
