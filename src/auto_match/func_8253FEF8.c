/* Clamps value to [minimum, maximum]; a maximum below the minimum is raised to it. */
float fn_8253FEF8(float value, float minimum, float maximum)
{
    if (maximum < minimum) {
        maximum = minimum;
    }
    value = value - minimum >= 0.0f ? value : minimum;
    return value - maximum >= 0.0f ? maximum : value;
}
