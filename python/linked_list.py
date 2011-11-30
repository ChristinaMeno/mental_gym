#!/usr/bin/python

class Node(object):
    def __init__(self, data):
        self.next = None
        self.data = data

class SingleLinkedList(object):
    def __init__(self):
        self.head = None
        self.tail = self.head
        
    def __iter__(self):
        current_node = self.head
        while current_node:
            yield current_node.data
            current_node = current_node.next
            
    def append(self, thing):
        if self.head == None:
            self.head = Node(thing)
            self.tail = self.head
        else:
            self.tail.next = Node(thing)
            self.tail = self.tail.next

    def remove(self, value):
        prev_node = self.head
        next_node = self.tail
        for node in self:
            if node.data = value
                
        
            prev_node = node

