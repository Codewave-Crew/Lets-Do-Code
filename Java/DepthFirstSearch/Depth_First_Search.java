public class DepthFirstSearch {

    static class Node {
        int value;
        Node left, right;

        public Node(int item) {
            value = item;
            left = right = null;
        }
    }

    static class BinaryTree {
        Node root;

        BinaryTree() {
            root = null;
        }
        void printPreorder(Node node) {
            if (node == null)
                return;
            System.out.print(node.value + " ");
            printPreorder(node.left);
            printPreorder(node.right);
        }

        void printPreorder() {
            printPreorder(root);
        }

        void printInorder(Node node) {
            if (node == null)
                return;

            printInorder(node.left);
            System.out.print(node.value + " ");
            printInorder(node.right);
        }

        void printInorder() {
            printInorder(root);
        }

        void printPostorder(Node node) {
            if (node == null)
                return;

            printPostorder(node.left);
            printPostorder(node.right);
            System.out.print(node.value + " ");
        }

        void printPostorder() {
            printPostorder(root);
        }

        //Tests
        public static void main(String[] args) {
            BinaryTree tree = new BinaryTree();
            tree.root = new Node(11);
            tree.root.left = new Node(24);
            tree.root.right = new Node(85);
            tree.root.left.left = new Node(43);
            tree.root.left.right = new Node(21);

            System.out.println("\nInorder traversal of binary tree is ");
            tree.printInorder();
            System.out.println("\nPreorder traversal of binary tree is ");
            tree.printPreorder();
            System.out.println("\nPostorder traversal of binary tree is ");
            tree.printPostorder();

        }
    }
}
