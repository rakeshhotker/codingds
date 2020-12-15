public class GraphClient {
    public static void main(String[] args)
    {
        Graph graph=new Graph();
        graph.addVertex("A");
        graph.addVertex("B");
        graph.addVertex("C");
        graph.addVertex("D");
        graph.addVertex("E");
        graph.addVertex("F");
        graph.addVertex("G");

        graph.addEdge("A","B",10);
        graph.addEdge("B","C",1);
        graph.addEdge("A","D",12);
        graph.addEdge("D","E",4);
        graph.addEdge("A","E",5);
        graph.addEdge("E","F",8);
        graph.addEdge("A","G",5);
        graph.addEdge("G","B",9);

        graph.display();
    }
}
