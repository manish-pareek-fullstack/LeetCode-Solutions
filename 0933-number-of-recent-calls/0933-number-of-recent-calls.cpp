class RecentCounter {
public:
    queue<int> q;

    RecentCounter() {
        
    }
    
    int ping(int t) {
        q.push(t);

        // remove old requests
        while (!q.empty() && q.front() < t - 3000) {
            q.pop();
        }

        return q.size();
    }
};