# ECommerce Application

### User Stories for Requirements of the Task 4 of the Final Project of Software Architecture

### Story #1 -
<table>
  <thead>
    <tr>
      <th><p>Title: Having the localization library in the core layer</p></th>
      <th><p>Priority: REQUIRED</p></th>
      <th><p>Estimate: 1 hour </p></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td colspan="3">
        <strong>User Story:</strong> 
        <p>As a Developer, I want to create a library in the core layer which can manage all the localization capabilities of the application.</p>
      </td>
    </tr>
    <tr>
      <td colspan="3">
        <strong>Acceptance Criteria:</strong>
        <p>
          <ul>
            <li> There is a unified library at the core layer that manages the localization utilities of the application. </li>
            <li> There is a reference of this library at the exe of the application. </li>
        </ul>
        </p>
      </td>
    </tr>
  </tbody>
</table>

### Story #2 -
<table>
  <thead>
    <tr>
      <th><p>Title: Managing Localization in one Library</p></th>
      <th><p>Priority: REQUIRED</p></th>
      <th><p>Estimate: 2 hours</p></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td colspan="3">
        <strong>User Story:</strong> 
        <p>As a Developer, I want to move all the localization capabity to one library so that I don't have to set up everything at each place.</p>
      </td>
    </tr>
    <tr>
      <td colspan="3">
        <strong>Acceptance Criteria:</strong>
        <p>
          <ul>
            <li> All the localization capablity could be seen in one library rather than each place in the application. </li>
        </ul>
        </p>
      </td>
    </tr>
  </tbody>
</table>

### Story #3 -
<table>
  <thead>
    <tr>
      <th><p>Title: Switching the locale during the execution of the application </p></th>
      <th><p>Priority: DESIRED</p></th>
      <th><p>Estimate: 2 hours</p></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td colspan="3">
        <strong>User Story:</strong> 
        <p>As a User, I want to be able to switch between the locales while executing the application so that I dont have to re-run the application by changing the locale in the code.</p>
      </td>
    </tr>
    <tr>
      <td colspan="3">
        <strong>Acceptance Criteria:</strong>
        <p>
          <ul>
            <li> Locale can be changed while executing the application. </li>
        </ul>
        </p>
      </td>
    </tr>
  </tbody>
</table>

### Story #4 -
<table>
  <thead>
    <tr>
      <th><p>Title: Merge the .po files together </p></th>
      <th><p>Priority: DESIRED</p></th>
      <th><p>Estimate: 2 hours</p></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td colspan="3">
        <strong>User Story:</strong> 
        <p>As a User, I want to be able merge all the .po files into one file so that I don't have to manage multiple .po files.</p>
      </td>
    </tr>
    <tr>
      <td colspan="3">
        <strong>Acceptance Criteria:</strong>
        <p>
          <ul>
            <li> Only one .po file exists for the application. </li>
            <li> All the output statements are printed from the .po files in all the locales in the selected language. </li>
        </ul>
        </p>
      </td>
    </tr>
  </tbody>
</table>

### Story #5 -
<table>
  <thead>
    <tr>
      <th><p>Title: Have xtext run as part of build process </p></th>
      <th><p>Priority: DESIRED</p></th>
      <th><p>Estimate: 4 hours</p></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td colspan="3">
        <strong>User Story:</strong> 
        <p>As a Developer, I want to be able to run the xtext command as a step of the build process of the application so that there is no manual interruption in this process.</p>
      </td>
    </tr>
    <tr>
      <td colspan="3">
        <strong>Acceptance Criteria:</strong>
        <p>
          <ul>
            <li> The xtext process runs as a step in the build process of application - likely as VS pre-build process. </li>
        </ul>
        </p>
      </td>
    </tr>
  </tbody>
</table>

### Story #6 -
<table>
  <thead>
    <tr>
      <th><p>Title: Have utilities that checks for mo files </p></th>
      <th><p>Priority: DESIRED</p></th>
      <th><p>Estimate: 4 hours</p></th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td colspan="3">
        <strong>User Story:</strong> 
        <p>As a Developer, I want to be able to code a utility that can list where the mo files are being picked up from so that we know exactly which mo files are being used by boost.</p>
      </td>
    </tr>
    <tr>
      <td colspan="3">
        <strong>Acceptance Criteria:</strong>
        <p>
          <ul>
            <li> There is a utility code which implements the functionality of listing the location of the mo files being picked up. </li>
            <li> The output of the application shows the files location. </li>
        </ul>
        </p>
      </td>
    </tr>
  </tbody>
</table>

