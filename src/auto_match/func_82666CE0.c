typedef struct Range_82666CE0 {
    unsigned int begin;
    unsigned int end;
} Range_82666CE0;

unsigned char fn_82666CE0(Range_82666CE0 *range, unsigned int value)
{
    return value < range->end && range->begin <= value;
}
