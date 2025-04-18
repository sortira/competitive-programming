import java.util.StringTokenizer;
class Solution {
    public boolean areNumbersAscending(String s) {
        StringTokenizer tok = new StringTokenizer(s);
        var list = new ArrayList<Integer>();
        while(tok.hasMoreTokens()){
            String w = tok.nextToken();
            try{
                int n = Integer.parseInt(w);
                list.add(n);
            } catch (Exception e) {
                continue;
            }
        }
        for(int i = 0; i < list.size() - 1; i++)
            if (list.get(i+1) <= list.get(i)) return false;
        return true;
    }
}