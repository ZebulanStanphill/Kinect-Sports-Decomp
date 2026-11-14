typedef struct Range_82CF7540 {
    int unk0;
    int begin;
    int end;
} Range_82CF7540;

unsigned char fn_82CF7540(Range_82CF7540 *self, int value)
{
    return value <= self->end - self->begin;
}
