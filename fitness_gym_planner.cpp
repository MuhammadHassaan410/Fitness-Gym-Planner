#include <iostream>
#include <string>
using namespace std;

/* ================= STRUCT ================= */

struct Exercise
{
    string name;
    int duration;
    int difficulty;
};

/* ================= SINGLY LINKED LIST ================= */

struct SNode
{
    Exercise data;
    SNode* next;
};

SNode* sHead = NULL;

void insertSLL(Exercise e)
{
    SNode* n = new SNode;
    n->data = e;
    n->next = NULL;

    if (sHead == NULL)
    {
        sHead = n;
    }
    else
    {
        SNode* t = sHead;

        while (t->next)
            t = t->next;

        t->next = n;
    }
}

/* ================= RECURSION ================= */

void performWorkout(SNode* n)
{
    if (n == NULL)
        return;

    cout << "Exercise: " << n->data.name
         << " (" << n->data.duration << " mins)\n";

    string done;

    cout << "Type done: ";
    cin >> done;

    performWorkout(n->next);
}

/* ================= DOUBLY LINKED LIST ================= */

struct DNode
{
    Exercise data;
    DNode* prev;
    DNode* next;
};

DNode* dHead = NULL;

void insertDLL(Exercise e)
{
    DNode* n = new DNode;

    n->data = e;
    n->prev = NULL;
    n->next = NULL;

    if (dHead == NULL)
    {
        dHead = n;
    }
    else
    {
        DNode* t = dHead;

        while (t->next)
            t = t->next;

        t->next = n;
        n->prev = t;
    }
}

void showForward()
{
    DNode* t = dHead;

    while (t)
    {
        cout << t->data.name << endl;
        t = t->next;
    }
}

void showBackward()
{
    DNode* t = dHead;

    if (t == NULL)
        return;

    while (t->next)
        t = t->next;

    while (t)
    {
        cout << t->data.name << endl;
        t = t->prev;
    }
}

/* ================= STACK ================= */

struct Stack
{
    Exercise arr[10];
    int top;
};

Stack st;

void initStack()
{
    st.top = -1;
}

void push(Exercise e)
{
    if (st.top < 9)
        st.arr[++st.top] = e;
}

/* ================= QUEUE ================= */

struct Queue
{
    Exercise arr[10];
    int front;
    int rear;
};

Queue q;

void initQueue()
{
    q.front = 0;
    q.rear = -1;
}

void enqueue(Exercise e)
{
    if (q.rear < 9)
        q.arr[++q.rear] = e;
}

/* ================= SORTING ================= */

void bubbleSort(Exercise a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j].duration > a[j + 1].duration)
            {
                Exercise t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

/* ================= BST ================= */

struct BST
{
    Exercise data;
    BST* left;
    BST* right;
};

BST* insertBST(BST* root, Exercise e)
{
    if (root == NULL)
    {
        BST* n = new BST;

        n->data = e;
        n->left = NULL;
        n->right = NULL;

        return n;
    }

    if (e.duration < root->data.duration)
        root->left = insertBST(root->left, e);
    else
        root->right = insertBST(root->right, e);

    return root;
}

void inorderBST(BST* root)
{
    if (root == NULL)
        return;

    inorderBST(root->left);

    cout << root->data.name << endl;

    inorderBST(root->right);
}

/* ================= AVL TREE ================= */

struct AVL
{
    Exercise data;
    AVL* left;
    AVL* right;
    int height;
};

int height(AVL* n)
{
    return (n == NULL) ? 0 : n->height;
}

int max(int a, int b)
{
    return (a > b) ? a : b;
}

AVL* newAVL(Exercise e)
{
    AVL* n = new AVL;

    n->data = e;
    n->left = NULL;
    n->right = NULL;
    n->height = 1;

    return n;
}

AVL* rightRotate(AVL* y)
{
    AVL* x = y->left;
    AVL* T2 = x->right;

    x->right = y;
    y->left = T2;

    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;

    return x;
}

AVL* leftRotate(AVL* x)
{
    AVL* y = x->right;
    AVL* T2 = y->left;

    y->left = x;
    x->right = T2;

    x->height = max(height(x->left), height(x->right)) + 1;
    y->height = max(height(y->left), height(y->right)) + 1;

    return y;
}

AVL* insertAVL(AVL* node, Exercise e)
{
    if (node == NULL)
        return newAVL(e);

    if (e.difficulty < node->data.difficulty)
        node->left = insertAVL(node->left, e);
    else
        node->right = insertAVL(node->right, e);

    node->height =
        1 + max(height(node->left), height(node->right));

    int balance =
        height(node->left) - height(node->right);

    if (balance > 1)
        return rightRotate(node);

    if (balance < -1)
        return leftRotate(node);

    return node;
}

void inorderAVL(AVL* root)
{
    if (root == NULL)
        return;

    inorderAVL(root->left);

    cout << root->data.name
         << " (diff " << root->data.difficulty << ")\n";

    inorderAVL(root->right);
}

/* ================= MAIN ================= */

int main()
{
    string name;
    string trainer;
    string day;

    int id;

    initStack();
    initQueue();

    cout << "============ FITNESS - GYM PLANNER =============\n";

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Want trainer (yes/no): ";
    cin >> trainer;

    cout << "\nENTER THE GYM: PAIN & GAIN\n";

    cout << "Enter Day (Mon/Tue/Wed/Thu/Fri): ";
    cin >> day;

    Exercise ex[4];

    string muscle;

    if (day == "Mon")
    {
        muscle = "Chest & Triceps";

        ex[0].name = "Bench Press";
        ex[0].duration = 10;
        ex[0].difficulty = 3;

        ex[1].name = "Incline Press";
        ex[1].duration = 12;
        ex[1].difficulty = 3;

        ex[2].name = "Push Ups";
        ex[2].duration = 8;
        ex[2].difficulty = 2;

        ex[3].name = "Tricep Pushdown";
        ex[3].duration = 10;
        ex[3].difficulty = 3;
    }

    bubbleSort(ex, 4);

    BST* bst = NULL;
    AVL* avl = NULL;

    for (int i = 0; i < 4; i++)
    {
        insertSLL(ex[i]);
        insertDLL(ex[i]);

        push(ex[i]);
        enqueue(ex[i]);

        bst = insertBST(bst, ex[i]);
        avl = insertAVL(avl, ex[i]);
    }

    cout << "\n--- START WORKOUT (" << muscle << ") ---\n";

    performWorkout(sHead);

    cout << "\n--- DOUBLY LINKED LIST FORWARD ---\n";
    showForward();

    cout << "\n--- DOUBLY LINKED LIST BACKWARD ---\n";
    showBackward();

    cout << "\n--- BST ---\n";
    inorderBST(bst);

    cout << "\n--- AVL TREE ---\n";
    inorderAVL(avl);

    cout << "\nWorkout completed successfully!\n";

    return 0;
}
