public class Solution
{
    public IList<string> FizzBuzz(int n)
    {
        IList<string> ans = new List<string>();
        for (int i = 1; i <= n; i++)
        {
            StringBuilder temp = new StringBuilder();
            if (i % 3 == 0)
            {
                temp.Append("Fizz");
            }

            if (i % 5 == 0)
            {
                temp.Append("Buzz");
            }
            string temp2 = temp.Length == 0 ? i.ToString() : temp.ToString();
            ans.Add(temp2);
        }
        return ans;
    }
}