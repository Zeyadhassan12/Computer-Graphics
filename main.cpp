//
//  main.cpp
//  Section3
//
//  Created by Zeyad hassan on 17/10/2022.
//

#include <iostream>

#include <OpenGL/gl.h>
#include <OpenGl/glu.h>
#include <GLUT/glut.h>
#include <stdlib.h>


void display();
void reshape(int w,int h);

void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(-10,8);
    glVertex2f(10,8);
    
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(-8,0);
    glVertex2f(-4,0);
    
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(-3,0);
    glVertex2f(4,0);
    
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(5,0);
    glVertex2f(9,0);
    
    glLineWidth(10.0);
    glBegin(GL_LINES);
    glVertex2f(-10,-8);
    glVertex2f(10,-8);
    
    glEnd();
    
    glFlush();
}

void reshape(int w, int h){
    glViewport(0,0 ,(GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10,-10 , 10);
    glMatrixMode(GL_MODELVIEW);
}

void init (){
    glClearColor(0.0,0.0,0.0,0.1);
}


int main(int argc, char **argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    
    glutInitWindowPosition(200,200);
    glutInitWindowSize(500,500);
    
    glutCreateWindow("window 2");
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    init();
    
    glutMainLoop();
    
}
