typedef struct Ring_82DFA230 {
    int unused[2];
    int first;    /* 0x08 */
    int capacity; /* 0x0c */
    char *data;   /* 0x10 */
} Ring_82DFA230;

void *fn_82DFA230(Ring_82DFA230 *self, int index)
{
    return self->data + ((self->first + index) % self->capacity) * 32;
}
