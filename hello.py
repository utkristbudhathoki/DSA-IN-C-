import numpy as np 
class Linear_Regression():

    def_init_(self, learning_rate, no_of_iterations ) :

        self.learning_rate = learning_rate

        self.no_of_iterations = no_of_iterations

        def fit(self, x,y):

            self.m,self.n = x.shape

            self.w = np