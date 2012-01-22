import sys

graph = {}

def build_graph(graph_file):
    with open(graph_file) as f:
        for l in f.readlines():
            start, end = l.strip('\n').split(',') 
            arc_list = graph.get(start, [])
            arc_list.append(end)
            if start not in graph:
                graph[start] = arc_list
        
def arc_in(graph, start, end):
    return end in graph.get(start,[])

def edge_in(graph, first, second):
    return arc_in(graph, first, second) and arc_in(graph, second, first)

if __name__ == '__main__':
    build_graph(sys.argv[1])

    print graph
    print edge_in(graph, '1','3')
    print edge_in(graph, '1','8')
    print arc_in(graph, '1','8')
