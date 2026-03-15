pipeline {
    agent any

    stages {

        stage('Build') {
            steps {
                sh 'gcc calculator.c -o calculator -lm'
            }
        }

        stage('Unit Test') {
            steps {
                sh 'chmod +x test.sh'
                sh './test.sh'
            }
        }

        stage('Docker Build') {
            steps {
                sh 'docker build -t scientific-calculator .'
            }
        }

        stage('Docker Push') {
            steps {
                sh 'docker tag scientific-calculator dakshminda/scientific-calculator:latest'
                sh 'docker push dakshminda/scientific-calculator:latest'
            }
        }

    }

    post {
        success {
            mail to: 'dakshminda10@gmail.com',
                 subject: "Build Successful",
                 body: "Jenkins build completed successfully."
        }

        failure {
            mail to: 'dakshminda10@gmail.com',
                 subject: "Build Failed",
                 body: "Jenkins build failed. Check Jenkins logs."
        }
    }
}
