package GitHubPackage;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class GitHubClass {

	public static void main(String[] args) {
		System.getProperty("webdriver.gecko.driver","C:\\Rajesh BM\\EclipseWorkSpace\\WebDriverProject\\lib\\geckodriver.exe");
		WebDriver driver = new FirefoxDriver();
		driver.get("http://yahoo.com");
	}

}