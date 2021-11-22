class Solution
{
public:
    int minMovesToSeat(vector<int> &seats, vector<int> &students)
    {

        //sorting both and then calculating the diff abs as mod

        sort(seats.begin(), seats.end());
        sort(students.begin(), students.end());

        int ans = 0;
        for (int i = 0; i < seats.size(); i++)
        {
            ans += abs(seats[i] - students[i]);
            // cout<<ans<<" ";
        }
        return ans;
    }
};