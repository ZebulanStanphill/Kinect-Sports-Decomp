typedef union Value_83067240 {
    unsigned int word;
    float value;
} Value_83067240;

void fn_83067240(const unsigned int *input, Value_83067240 *output)
{
    float first;
    float second;
    float third;
    float fourth;
    float fifth;
    float sixth;
    output[0].word = input[0];
    first = output[0].value;
    output[1].word = input[1];
    second = output[1].value;
    output[2].word = input[2];
    third = output[2].value;
    output[18].word = input[3];
    fourth = output[18].value;
    output[19].word = input[4];
    fifth = output[19].value;
    output[20].word = input[5];
    output[12].value = first;
    sixth = output[20].value;
    output[21].value = first;
    output[9].value = first;
    output[15].value = fourth;
    output[6].value = fourth;
    output[3].value = fourth;
    output[16].value = second;
    output[13].value = second;
    output[4].value = second;
    output[22].value = fifth;
    output[10].value = fifth;
    output[7].value = fifth;
    output[11].value = third;
    output[8].value = third;
    output[5].value = third;
    output[23].value = sixth;
    output[17].value = sixth;
    output[14].value = sixth;
}
