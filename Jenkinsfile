pipeline {
    agent any

    stages {

        stage('Clone Repository') {
            steps {
                git 'https://github.com/YOUR_USERNAME/scientific-calculator-devops.git'
            }
        }

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

    }

    post {
        success {
            mail to: 'developer@example.com',
                 subject: "Build Successful",
                 body: "Jenkins build completed successfully."
        }

        failure {
            mail to: 'developer@example.com',
                 subject: "Build Failed",
                 body: "Jenkins build failed. Check Jenkins logs."
        }
    }
}
