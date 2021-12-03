// 1491. Average Salary Excluding the Minimum and Maximum Salary

class Solution
{
public:
    double average(vector<int> &salary)
    {
        int size = salary.size();

        // if(size == 2){
        //     return 0;
        // }
        sort(salary.begin(), salary.end());

        double avg;
        double sum = 0;
        for (int i = 1; i <= size - 2; i++)
        {
            sum += salary[i];
        }
        avg = (sum / (size - 2));
        return avg;
    }
};