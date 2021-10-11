class StackArray {
    
    private int maxSize; //size of stack array
    private int[] stackData;
    private int top; //top of stack
    
    //-------------------------------------------------------------------------
    
    public StackArray(int s) {
        this.stackData = new int[s];
        this.maxSize = s;
        this.top = -1;
    }
    
    public boolean isEmpty() {
        if(this.top==-1){
            return true;
        }else{
            return false;
        }
    }
    
    public boolean isFull() {
        if(this.top==this.maxSize-1){
            return true;
        }else{
            return false;
        }
    }
    
    public void push(int item) {
        if(this.isFull()){
            System.out.println("Stack is full ! Please pop before push");
        }else{
            this.top++;
            this.stackData[this.top] = item;
        }
    }
    
    public int pop() {
        if(this.isEmpty()){
            System.out.println("Stack is empty ! Please push before pop");
            return -1;
        }else{
            int item = this.stackData[this.top];
            this.top--;
            return item;
        }
    }
    public int peek() {
        if(this.isEmpty()){
            System.out.println("Stack is empty !");
            return -1;
        }else{
            int item = this.stackData[this.top];
            return item;
        }
    }
    public void display() {
        System.out.print("Data within the stack : ");
        for(int i=this.top; i>-1; i--){
            System.out.print(this.stackData[i]+" ");
        }
        System.out.print("\n");
    }
} //end class StackArray




public class StackArrayApp
{
	public static void main(String[] args) {
		StackArray st = new StackArray(5);
		
		st.push(3);
		st.push(2);
		st.push(78);
        st.display();
        int k = st.pop();
        st.display();
	}
}
