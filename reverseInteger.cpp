int reverse(int x) 
    {
        long ans = 0;
        while (x) 
        {
            int temp = ans * 10 + x % 10;
            if (temp / 10 != ans)
                return 0;
            ans = temp;
            x /= 10;
        }
        return ans;
        
    }