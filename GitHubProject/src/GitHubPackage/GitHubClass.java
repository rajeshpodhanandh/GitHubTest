package GitHubPackage;

import org.openqa.selenium.WebDriver;
import org.openqa.selenium.firefox.FirefoxDriver;

public class GitHubClass {

	public static void main(String[] args) {
		System.getProperty("webdriver.gecko.driver","C:\\Rajesh BM\\EclipseWorkSpace\\WebDriverProject\\lib\\geckodriver.exe");
		WebDriver driver = new FirefoxDriver();
		driver.get("http://yahoo.com");
		System.out.println("open Yahoo webpage");
		int a=10;
		int b=5;
		if(a>b){
			System.out.println("a is greater");
		}
	}

}
