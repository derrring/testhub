import React from 'react'
import ReactDOM from 'react-dom'

const Header = (course) => {
  return (
      <h1>{course.name}</h1>
  )
 }

const Part = (props) => {
  return(
    <p>
      {props.name} {props.num}
    </p>
  )
}

const Total = (exercises) => {
  return (
    <p>Number of exercises {exercises.ex1 + exercises.ex2 + exercises.ex3}</p>
  )
}


const App = () => {
  const course = 'Half Stack application development'
  const part1 = 'Fundamentals of React'
  const exercises1 = 10
  const part2 = 'Using props to pass data'
  const exercises2 = 7
  const part3 = 'State of a component'
  const exercises3 = 14
  
  const Content = () => {
    return (
      <div>
        <Part name={part1} num={exercises1} />
        <Part name={part2} num={exercises2} />
        <Part name={part3} num={exercises3} />
      </div>
    )
  }

  return (
    <div>
      <Header name={course}/>
      <Content />
      <Total ex1= {exercises1} ex2={exercises2} ex3={exercises3}/>
    </div>
  )
}

ReactDOM.render(<App />, document.getElementById('root'))