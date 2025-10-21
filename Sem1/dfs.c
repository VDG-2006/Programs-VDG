#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}Node;
typedef struct graph
{
    int vertices,*visited;
    Node**edges;
}Graph;
Node*createNode(int vertice)
{
    Node*newNode=malloc(sizeof(Node));
    newNode->data=vertice;
    newNode->next=NULL;
    return newNode;
}
Graph*createGraph(int vertices)
{
    Graph*g=(Graph*)malloc(sizeof(Graph));
    g->vertices=vertices;
    g->edges=(Node**)malloc(vertices*sizeof(Node));
    g->visited = (int*)malloc(vertices * sizeof(int));
    for(int i=0;i<vertices;i++)
    {
        g->edges[i]=NULL;
        g->visited[i]=0;
    }
    return g;
}
void addedge(Graph*g,int src,int dest)
{
    Node*newNode=createNode(dest);
    newNode->next=g->edges[src];
    g->edges[src]=newNode;
    newNode=createNode(src);
    newNode->next=g->edges[dest];
    g->edges[dest]=newNode;
}
void dfs(Graph*g,int vertex)
{
    Node*edges=g->edges[vertex];
    Node*temp=edges;
    g->visited[vertex]=1;
    printf(" %d",vertex);
    while(temp!=NULL)
    {
        int adjvertex=temp->data;
        if(g->visited[adjvertex]==0)
            dfs(g,adjvertex);
        temp=temp->next;
    }
}
int main()
{
    int vertices,edges,src,dest;
    printf("Enter no of vertices:");
    scanf("%d",&vertices);
    Graph*g=createGraph(vertices);
    printf("Enter the number of edges:");
    scanf("%d",&edges);
    for(int i=0;i<edges;i++)
    {
        printf("Enter source and destination of the edge:");
        scanf("%d %d",&src,&dest);
        addedge(g,src,dest);
    }
    int v;
    printf("Enter the vertex to start dfs:");
    scanf("%d",&v);
    printf("DFS Traversal:");
    dfs(g,v);
    printf("\n");
    return 0;
}