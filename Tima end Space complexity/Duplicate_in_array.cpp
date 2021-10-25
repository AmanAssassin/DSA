int min = INT_MAX, max = INT_MIN, actual_sum = 0;
for (int i = 0; i < n; i++)
{
    if (arr[i] < min)
    {
        min = arr[i];
    }
    else if (arr[i] > max)
    {
        max = arr[i];
    }
    actual_sum += arr[i];
}
int expected_sum = 0;
for (int i = min; i <= max; i++)
{
    expected_sum += i;
}
return (actual_sum - expected_sum);