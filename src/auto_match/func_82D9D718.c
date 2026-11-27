#include "xdk/vectorintrinsics.h"

extern int lbl_83184694[];
extern float fn_82CECE68(float, float);

float fn_82D9D718(int index, const __vector4 *vectors)
{
    float second;
    float first;
    int left = (&lbl_83184694[1])[index];
    int right = (&lbl_83184694[2])[index];
    const __vector4 *axis = &vectors[left + 5];
    __stvewx(__vmsum3fp(vectors[right + 8], *axis), &first, 0);
    __stvewx(__vmsum3fp(vectors[left + 8], *axis), &second, 0);
    return fn_82CECE68(first, second);
}
