import java.util.ArrayList;

public class depthFirstSearch<T> {
    public TNode<T> root = null;
    ArrayList<T>() treeArray = new Arraylist<>();


    public depthFirstSearch(TNode<T> root) {

        public ArrayList<T> preOrderTraverse(){
            preOrder(treeArray, root);
        }

        public void preOrder(ArrayList<T> searchList, TNode<T> gRoot){
            searchList.add(gRoot.value);
            if (gRoot.left != null) {
                preOrder(searchList, gRoot.left);
            }
            if (gRoot.right != null) {
                preOrder(searchList, gRoot.right);
            }
        }

        public ArrayList<T> inOrderTraverse(){
            inOrder(treeArray, root);
        }

        public void inOrder(ArrayList<T> searchList, TNode<T> gRoot){
            newList.add(gRoot.value);
            if (gRoot.left != null) {
                inOrder(searchList, gRoot.left);
            }
            if (gRoot.right != null) {
                inOrder(searchList, gRoot.right);
            }
        }

        public ArrayList<T> postOrderTraverse(){
            postOrder(treeArray, root);
        }

        public void postOrder(ArrayList<T> searchList, TNode<T> gRoot){
            searchList.add(gRoot.value);
            if (gRoot.left != null) {
                postOrder(searchList, gRoot.left);
            }
            if (gRoot.right != null) {
                postOrder(searchList, gRoot.right);
            }
        }
    }
}
