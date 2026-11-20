extern float fn_82809CB0(float x); /* fabsf */

/* Copies the weights the sources point to (0 for a missing one) and sorts them by decreasing
   magnitude, keeping each weight's original index beside it. */
void fn_82838A20(float **sources, int *order, float *weights, int count)
{
    int i;
    int last;
    float weight;
    int index;

    for (i = 0; i < count; i++) {
        order[i] = i;
        if (sources[i] != 0) {
            weights[i] = *sources[i];
        } else {
            weights[i] = 0.0f;
        }
    }
    last = count - 1;
    do {
        for (i = 0; i < last; i++) {
            if (fn_82809CB0(weights[i]) < fn_82809CB0(weights[i + 1])) {
                weight = weights[i];
                weights[i] = weights[i + 1];
                weights[i + 1] = weight;
                index = order[i];
                order[i] = order[i + 1];
                order[i + 1] = index;
                break;
            }
        }
    } while (i != last);
}
