class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        int lastTime = 0;

        for (int pos : left) {
            lastTime = max(lastTime, pos); // takes 'pos' seconds to reach 0
        }

        for (int pos : right) {
            lastTime = max(lastTime, n - pos); // takes 'n - pos' seconds to reach end
        }

        return lastTime;
    }
};
