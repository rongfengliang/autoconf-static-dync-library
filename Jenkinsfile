pipeline {
  agent {
    node {
      label 'docker-64'
    }

  }
  stages {
    stage('autoreconf  lib build') {
      steps {
        sh 'cd lib && autoreconf -i '
      }
    }
    stage('autoreconf  lib configure') {
      steps {
        sh 'cd lib && ./configure '
      }
    }
    stage('autoreconf  lib make ') {
      steps {
        sh 'cd lib && make '
      }
    }
    stage('autoreconf  dynclib build') {
      steps {
        sh 'cd dynclib && autoreconf -i '
      }
    }
    stage('autoreconf  dynclib configure') {
      steps {
        sh 'cd dynclib && ./configure '
      }
    }
    stage('autoreconf  dynclib make && install') {
      steps {
        sh 'cd dynclib && make && make install'
      }
    }
    stage('autoreconf src ') {
      steps {
        sh 'cd src && autoreconf -i '
      }
    }
    stage('autoreconf src configure && make') {
      steps {
        sh 'cd src && ./configure &&  make'
      }
    }
    stage('autoreconf src  run') {
      steps {
        sh 'cd src &&  ./userloginapp'
      }
    }
  }
}
