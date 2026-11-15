typedef struct Data_82DEA760 Data_82DEA760;

struct Data_82DEA760 {
    struct {
        void *slot0;
        void *slot4;
        void *slot8;
        void (*setValue)(Data_82DEA760 *, float);
        void *slot10;
        void (*select)(Data_82DEA760 *, int);
        void *slot18;
        void *slot1c;
        int (*getType)(Data_82DEA760 *);
    } *vtable;
};

void fn_82DEA760(void *self, char *constraint)
{
    Data_82DEA760 *data = *(Data_82DEA760 **)(constraint + 0xc);
    if (data->vtable->getType(data) != 11) {
        char *first = *(char **)(*(char **)(constraint + 0x14) + 0x98);
        char *second = *(char **)(*(char **)(constraint + 0x18) + 0x98);
        float result = 3.40282e38f;
        data = *(Data_82DEA760 **)(constraint + 0xc);
        if (first != 0 || second != 0) {
            float firstValue = 3.40282e38f;
            float secondValue = 3.40282e38f;
            if (first != 0) {
                firstValue = *(float *)(first + 0x18);
            }
            if (second != 0) {
                secondValue = *(float *)(second + 0x18);
            }
            result = firstValue - secondValue >= 0.0f ? secondValue : firstValue;
            {
                int choice = 0;
                if (firstValue < secondValue) {
                } else {
                    choice = 1;
                }
                data->vtable->select(data, choice);
            }
        }
        data->vtable->setValue(data, result);
    }
}
