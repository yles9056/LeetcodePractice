public class Solution
{
    public bool CanConstruct(string ransomNote, string magazine)
    {
        /*List<char> cm = magazine.ToCharArray().ToList();
        foreach(char R in ransomNote)
        {
            if(!cm.Remove(R))
            {
                return false;
            }
        }
        return true;*/

        int[] letters = new int[26];
        foreach (char M in magazine)
        {
            letters[M - 'a']++;
        }
        foreach (char R in ransomNote)
        {
            if (--letters[R - 'a'] < 0)
            {
                return false;
            }
        }
        return true;
    }
}