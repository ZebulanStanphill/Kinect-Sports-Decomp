/* is the format/code one of the supported values */
int fn_8284C480(unsigned int code)
{
    switch (code) {
    case 0x18280043:
    case 0x1828004f:
    case 0x18280086:
    case 0x1a20007d:
    case 0x1a200086:
    case 0x28000002:
    case 0x28280043:
    case 0x28280044:
    case 0x28280045:
    case 0x2828004f:
    case 0x28280086:
    case 0x2a200086:
        return 1;
    }
    return 0;
}
