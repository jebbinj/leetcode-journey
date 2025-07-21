struct StackElem
{
    int val;
    int minIndex;
};

class MinStack
{
private:
    vector<StackElem> stack;

public:
    MinStack() {}

    void push(int val)
    {
        int newMinIndex;

        if (stack.size() == 0)
        {
            newMinIndex = 0;
        }
        else
        {
            newMinIndex = stack[stack.back().minIndex].val < val ? stack.back().minIndex : stack.size();
        }

        StackElem newElem = {val, newMinIndex};
        stack.push_back(newElem);
    }

    void pop()
    {
        return stack.pop_back();
    }

    int top()
    {
        return stack.back().val;
    }

    int getMin()
    {
        return stack[stack.back().minIndex].val;
    }
};